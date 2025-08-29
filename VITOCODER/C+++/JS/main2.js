//request to enter n
let n = 10
/*/let n = parseInt(prompt(`nhập số n: `))

//call the array evenNumber and array oddNumber
let evenNumber =[]
let oddNumber =[]

//match
for (let i = 1; i < n; i++){
    if (i % 2 === 0){
        evenNumber.push(i)
    } else {oddNumber.push(i)}
}
console.log(`evenNumbers: ${evenNumber}`)
console.log(`oddNumber: ${oddNumber}`)

console.log('')
//Find the largest number divisible by 7 and less than n
let maxMultipleOf7 = 0

for (i = n - 1; i > 0; i--){
    if (i % 7 === 0){
        maxMultipleOf7=i
        break
    }
} console.log(`the largest number divisible by 7 and less than
 ${n}: ${maxMultipleOf7}`)

//Calculate the sum of numbers from 1 to n
let sum = 0

for (let i = 1; i <= n; i++){
    sum += i
}
console.log(`the sum of numbers from 1 to ${n}: ${sum}`)

//let n = parseInt(prompt())

for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++){
        square += "j "
    } 
    square += "\n" 
}
console.log(square)

let square = ""
for (let i = 1; i <= n; i++){
    for (let j = 1; j <= n; j++){
        if ( i == 1 || i == n || j == 1 || j == n){
            square += "* "
        } else { 
            square += "  "
        }
    } square += "\n"
} console.log(square)
*/
let triangle = ""

for (i = 1; i <= n; i++){
    for (j = 1; j <= n -1; j++){
        triangle += " "
    }
    for (k = 1; k <= 2 * i - 1; k++){
        triangle +="* "
    }
    triangle += "\n"
} console.log(triangle)