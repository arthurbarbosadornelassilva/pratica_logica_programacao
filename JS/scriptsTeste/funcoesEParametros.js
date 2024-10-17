const name = 'Dev Arthur'
const outroNome = 'Adriana Mae'

// Funções em JS
// Lembrando, as funções são conjuntos de códigos pré-programados que podem ser reutilizados
function print () {
    console.log('Print \n')
}

print()

// Função com Parâmetros
// 1.
function somador (num1, num2) {
    console.log('Soma:', num1 + num2, '\n')
}

somador(5, 7)

// 2.
function upperCase (text) {
    const upperCased = text.toUpperCase()
    console.log(upperCased, '\n')
}

upperCase(name) // N entendi pq tá com essa linha cortando name aqui

// Variáveis que recebem uma função como valores (é o mesmo que uma função padrão)

const toUpper = () => {
    upperCase(outroNome)
}

toUpper()