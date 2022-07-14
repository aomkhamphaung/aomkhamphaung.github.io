$(function(){
    getData();

    $("button.atcbtn").on("click", function(){
        var id = $(this).data("id");
        var name = $(this).data("name");
        var price = $(this).data("price");

        var item = {
            id: id,
            name: name,
            price: price,
            qty: 1
        }
        //console.log(item)

        var cartStr = localStorage.getItem('cart');
        if(!cartStr){
            var itemArr = new Array();
        }else{
            var itemArr = JSON.parse(cartStr)
        }

        var status = false;
        $.each(itemArr, function(i,v){
            if(v.id == id){
                v.qty++;
                status == true;
                return false;
            }
        })

        if(status == false){
            itemArr.push(item);
        }

        localStorage.setItem('cart', JSON.stringify(itemArr));
        getData()
    })

    function getData(){
        var cartStr = localStorage.getItem('cart');

        if(!cartStr){
            var data = `<h2 style = "text-align: center;">Your cart is empty!</h2>`;
            $(".mytable").hide();
            $(".mycart").show();
            $(".mycart").html(data);
        }else{
            var body;
            var cartArr = JSON.parse(cartStr);
            var total = 0;
            $.each(cartArr, function(i,v){
                total += v.qty * v.price;
                let id = i+1;

                body += `<tr>
                    <td> ${id} 
                    <button class = "delebtn" data-index = "${i}"> X </button>
                    </td>
                    <td>${v.name}</td>
                    <td>${v.price}</td>
                    <td>
                    <button class = "minbtn" data-index = "${i}"> - </button>
                    ${v.qty}
                    <button class = "maxbtn" data-index = "${i}"> + </button>
                    </td>
                    <td>${v.qty * v.price}</td>
                    </tr>`
            })

            body += `<tr> 
                <td colspan = "4">Total</td>
                <td>${numberFormat(total)}</td>
                </tr>`

            $(".mycart").hide();
            $("#cartitems").html(body);
            $(".mytable").show();
        }
    }

    $("#cartitems").on("click", "minbtn", function(){
        var index = $(this).data('index');
        var cartStr = localStorage.getItem('cart');
        var cartStr = JSON.parse('cartStr');
        if(cartStr[index].qty > 1){
            cartArr[index].qty--;
        }else{
            var status = confirm("Are you sure to delete?");
            if(status == true){
                cartArr.splice(index,1);
            }
            localStorage.setItem('cart', JSON.stringify(cartArr));
            getData();
        }
    })

    // $("#cartitems").on("click", "maxbtn", function(){
    //     var index = $(this).data('index');
    //     var cartStr = localStorage.getItem('cart');
    //     var cartStr = JSON.parse('cartStr');
    //     cartArr[index].qty++;
    //     localStorage.setItem('cart', JSON.stringify(cartArr));
    //     getData()
    // })

    function numberFormat(x) {
        return x.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");
    }
})