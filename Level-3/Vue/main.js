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
            result3: '<h1 style = "color: orange">You are over-weight!</h1>',
            result4: '<h1 style = "color: red">You are obesity!</h1>'
        }
    },
});

const app3 = Vue.createApp({
    data(){
        return {
            age: Number,
            isButtonDisabled: true,
            isInputDisabled: true,
            mark: 50,
            isActive: true,
            hasError: false,
            students: [
                {name: 'Mg Mg', age: 18, gender: 'male'},
                {name: 'Ma Ma', age: 19, gender: 'female'},
                {name: 'Ag Ag', age: 20, gender: 'female'},
            ]
        }
    },
    methods: {
        mybtn(){
            if(this.age >= 18){
                this.isInputDisabled = false
            }
        },
        validate(){
            console.log('Form Validation Here!')
        }
    }
});

const app4 = Vue.createApp({
    data() {
        return {
            students: [
                {name: 'Mg Mg', age: 17, gender: 'male'},
                {name: 'Ma Ma', age: 18, gender: 'female'},
                {name: 'Kaung Kaung', age: 19, gender: 'male'},
            ]
        }
    },
    methods: {
        openalert(index){
            index--;
            alert(`My name is ${this.students[index].name} and I'm ${this.students[index].age} years old.`);
        }
    }
});

const app5 = Vue.createApp({
    data() {
        return {
            status: true,
            name: 'Aom Kham Phaung',
            items: Array(),
        }
    },
    mounted() {
        // this.name = this.name.split('').reverse().join('')
        // console.log('the component is mounted')

        axios.get("https://api.imgflip.com/get_memes")
        .then(response =>{
            console.log(response.data)
            if(response.data.success == true){
                this.items = response.data.data.memes
            }
        })
        .catch(err =>{
            console.log(err)
        })
    },
    methods: {

    }
})

const app6 = Vue.createApp({
    data(){
        return{
            students: [
                {name: 'Mg Mg', age: 17, gender: 'male'},
                {name: 'Ma Ma', age: 18, gender: 'female'},
                {name: 'Kaung Kaung', age: 19, gender: 'male'},
            ]
        }
    },
    methods: {

    },
    computed: {
        boys(){
            return this.students.filter(row => row.gender == 'male')
        },
        adults(){
            return this.students.filter(row => row.age >= 18)
        }
    }
})