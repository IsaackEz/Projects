let isApproved = true;
let firstName;
let selectedColor = null;

let person = {
    name: 'Isaac',
    age: 21
};

//Dot Notation
person.name = 'Carlos';

//Bracket Notation
//person['name'] = 'April';
let selection = 'name';
person[selection] = 'April';

console.log(person.name);

//Cannot be a reserved keyword
//Cannot start with a number
//Cannot contain a space or hyphen (-)
//Are case-sensitive