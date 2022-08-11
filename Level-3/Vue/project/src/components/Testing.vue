<template>
    <h2>{{name}}</h2>
    <button class="btn btn-success" @click="reverse">Reverse</button>
</template>

<script>
    export default {
  name: 'TestingPart',
  data(){
    return {
        name: 'Aom Kham Phaung'
    }
  },
  methods: {
    reverse(){
        this.name = this.name.split('').reverse().join('')
    }
  }
}
</script>

<style>

</style>