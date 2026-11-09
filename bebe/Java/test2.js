function number(x, y) {
    const z = x + y;
    console.log(x + " ditambah " + y + " sama dengan " + z);
}   
number(2, 10);

const firstName = "Bahlil";
const lastName = "Lahadalia";
function fullName(firstName, lastName) {
    const fullName = firstName + " " + lastName;
    return fullName;
}
const myFullName = fullName(firstName, lastName);
console.log("Nama lengkap saya adalah " + myFullName);


function pepek(x, y) {
    const z = x * y;
    return z;
}
const result = pepek(10, 3);
console.log(result)

//or

function pepek(x, y) {
    return x * y;
}
const asu = pepek(50, 3);
console.log(asu)

const sayBye=(name) => {
    console.log("Bye, "+ name);
}
const add=(x,y) => {
    return x + y
}

const memekk = (name,age)=> name + ' adalah umur '+ age 
const koko = memekk('Panji',50  )
console.log(koko);
//or
const memekk2 = (name2,age2)=> name2 + ' adalah umur '+ age2
console.log(memekk2('Asep',90));