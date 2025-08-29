
{console.log('hello world');
//alert('xin chao')
let name = "vit" //this is a varibale
//js is casw-sensitive
let Name = 'Vit'
console.log('name: '+ name,'Name: '+ Name )

let x = 10
let y = 20
console.log('x: ' + x)
console.log('y: ' + y)
console.log(y ** 3) //** power

 if(1 == 1) {var z = 10}

console.log('z: '+ z)
console.log(x == '10')

const PI = 3.1416
console.log(`PI = ${PI}`)
const vithasbedung = false
console.log(vithasbedung)

//Define an array
let vit = ['7638',
                '3003',
                ,//empty item
                '2911',
                '1904']
console.log(vit[0]);

var poem = 
`Quả cau nho nhỏ miếng trầu hôi,\n
Này của Xuân Hương mới quệt rồi.\n
Có phải duyên nhau thì thắm lại,\n
Đừng xanh như lá, bạc như vôi\n
(Mời trầu - Hồ Xuân Hương)`
console.log(poem)

//Now we learn "control flow"
/** 
let i = 0 
while (i < 10) {i = i+1
                console.log(`i = ${i}`)
                } */
console.log(`\n`)
let m = 5
if (m >= 0 && m < 4) {
    console.log(`bad`)
} else if (m >=4 && m <= 6) {
    console.log(`normal`)
} else if (m > 6 && m < 8) {
    console.log(`good`)
} else if (m >=8 &&m <=10) {
    console.log(`excellent`)
} else {
    console.log(`m is underfined`)
}

//iterate using for Loop
for(let i = 0; i < 10; i++) {
    //if(i == 0) 
    //if(i == 3 || i == 5)
    if(i % 2 === 0) {
        continue
    }
    console.log(`i = ${i}`)
}

//Define an array
let vitt = ['7638',
                '3003',
                '2911',
                '1904']
console.log(vitt.length)
//console.log(sadofvitt[sadofvitt.length -1])

for(let i = 0; i < vitt.length - 1; i++) 
{
    console.log(vitt[i])
}

console.log('using foreach')
vitt.forEach(function(vit) {
    console.log(vit)
} )

console.log(`using forEach with arrow function`)
vitt.forEach((vit) => {
    console.log(vit)
})

//using for of
for(let vit of vitt){
    console.log(`name: ${vit}`)
}

for(let i in vitt){
    console.log(`i = ${i}`)
}
}
//request to enter n
let n = 5

//let n = parseInt(prompt(`nhập số n: `))

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
let square = ""
/*
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++){
        square += "* "
    } 
    square += "\n" 
}
console.log(square)
*/

for (let i = 1; i <= n; i++){
    for (let j = 1; j <= n; j++){
        if ( i == 1 || i == n || j == 1 || j == n){
            square += "* "
        } else { 
            square += "  "
        }
    } square += "\n"
} console.log(square)

let triangle = ""

for (i = 1; i <= 10 -1; i++){
    for (j = 1; j <= 10; j++){
        triangle += " "
    }
    for (k = 1; k <= 2 * i - 1; k++){
        triangle +="* "
    }
    triangle += "\n"
} console.log(triangle)

/*
    for(let i=100;i<=999;i++)
	{
		let a=i/100;
	    let b=(i%100)/10;
	    let c=i%10;
	    if ((a*b*c)%9== 0)
	       console.log("\t %d", i);
    }
    
*/


