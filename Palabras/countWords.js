let paragraph = 'Node.js es un **entorno** en tiempo de ejecución multiplataforma, **de** código abierto, para la capa del servidor basado en el lenguaje de programación **JavaScript**, asíncrono, con E/S **de** datos en una arquitectura orientada a eventos y basado en el motor V8.'

const countWords = text => {
    let pattern = /[*][*]\w+[*][*]/g
    let result = text.match(pattern)
    let final_array = result.filter((el, index, array) => {
        return array.indexOf(el) === index
    })

    return final_array
}

console.log(countWords(paragraph))
console.log("Counter: " + countWords(paragraph).length)