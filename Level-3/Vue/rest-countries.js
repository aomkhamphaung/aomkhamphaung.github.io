const app = Vue.createApp({
    data() {
        return {
            items: Array(),
        }
    },
    mounted() {
        axios.get("https://restcountries.com/v3.1/all"),
    }
});