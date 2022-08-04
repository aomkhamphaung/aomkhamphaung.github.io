const app = Vue.createApp({
    data() {
        return {
        message: '<h3 style = "color: red">Hello Vue</h3>',
        name: 'Aom Kham Phaung',
        age: 18,
        // photo : 'item-1.webp',
        seen: true,
        colors: ['red', 'green', 'blue'],
        students: [
            {name: 'Mg Mg', age: 17, gender: 'male'},
            {name: 'Ma Ma', age: 18, gender: 'female'},
            {name: 'Bo Bo', age: 19, gender: 'male'},
        ],
        count: 1,
        username: '',
        }
    },

    methods: {
        openalert(msg){
            alert(msg)
        },
    }
});

const app2 = Vue.createApp({
    data(){
        return {
            height: '',
            height1: '',
            weight: '',
            calculatebmi: '',
            result1: '<h1 style = "color: blue">You are under-weight!</h1>',
            result2: '<h1 style = "color: green">You are normal-weight!</h1>',
            result3: '<h1 style = "color: orange">Your are over-weight!</h1>',
            result4: '<h1 style = "color: red">Your are obesity!</h1>'
        }
    },
});