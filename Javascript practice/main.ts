//  https://www.freecodecamp.org/news/learn-typescript-in-5-minutes-13eda868daeb/
//  
//  GOOD RESOURCE: https://www.valentinog.com/blog/typescript/
//  

const test = {
    prop: 42,
    func: function(){
        return this.prop;
    },
};
console.log(test.func());


//  Testing with console logs 

let a = 5;
let b = 7;
let c = a + b;
console.log(c);

//  Testing with if / else statements. 
let num: number = 3;
let personName: string = 'Alex';
let personName2: string = 'Bob';
let isPresent: boolean = false;     //  Doesn't seem to work with binary for if statements. Wrong syntax?

if (num === 4){
    console.log(personName);
}
else {
    console.log(personName2);
}


//  Working with class types
class Car{
    // Input fields
    model: string;
    doors: number;
    colour: string;
    isElectric: boolean;

    //  Define how the fields are constructed for the class
    constructor(model: string, doors: number, colour: string, isElectric: boolean){
        this.model = model;
        this.doors = doors;
        this.colour = colour;
        this.isElectric = isElectric;
}
    //  This is a function that can be called to describe a car's model. 
    //  This function can be expanded upon or duplicated with adjustments to explain any of the other car properties.
    displayMake(): void {
        //  console.log to display the information. Note the \n newline for added legibility
        console.log(`This car is a ${this.model}. \nThis car is ${this.colour}, it has ${this.doors} doors`);
    }
}

//  This is a Prius car for testing purposes. Inputting the values of the prius car per the 'CAR' class
 const Prius = new Car('Prius', 2, 'Red', true);
//  Calling the function to console.log the information
Prius.displayMake();

interface Icar{
    model: string,
    make: string,
    display(): void
}
/*

//  This SHOULD work, however the => throws an error expecting another '}' to be present for no reason whatsoever :(
const Car2: Icar = {
    model: 'Prius',
    make: 'Toyota',
    display() => {console.log ('hi');}
}
*/

// ***********************************************
// ***********************************************
// ***********************************************
//  https://www.valentinog.com/blog/typescript/#a-couple-of-words-on-types


//  Interfaces are super important, they allow for an input entity to have a defined 'type'
//  Example below: for inputting a url link the url must be of type 'string' for it to be valid. 
//  This section will describe how to 

interface Link{
    description?: string;       //  Adding a question mark to the interface input field makes it an optional input.
    id?: number;
    url: string;
    [index: string]: any;       //  To enable index searching of strings we define the type of index form here. Ideally it would just be of type 'string', however this throws errors
                                //  for the id which is of type 'number'. A union can be performed, ie. "string | number | undefined" to satisfy the index type, however this throws errors
                                //  with the ***.match(regex) term in the following function. This .match only searches strings, so throws an error if the defined type it is to search is 
                                //  specifically including things it doesn't like (numbers | undefined in this case). To satisfy everything and everyone, it is simplest to just set the index
                                //  string type to 'any'. This is inelegant. 
}
//  Function is of the form of an array of links and a search term
function filterByTerm(
    input: Array<Link>, 
    searchTerm: string,
    lookupKey: string = "url"
    ): Array<Link> {
    if (!searchTerm) throw Error("searchTerm cannot be empty");     //  If searchTerm is empty throw error
    if (!input.length) throw Error("input cannot be empty");        //  If there is no input at all throw an error
    const regex = new RegExp(searchTerm, "i");
    return input.filter(function(arrayElement){
        return arrayElement[lookupKey].match(regex);
    });
}

//  Declaring three objects to be of type: Link
const obj1: Link = {url: "string1"};
const obj2: Link = {url: "string2"};
const obj3: Link = {url: "string3"};

//  Declaring an array of the above Link objects. Note that this an array of type: Link
const arrOfLinks: Array<Link> = [obj1, obj2, obj3];

//  Declare the constant search term of type string to be "java"
const term: string = "string3";

//  Put it all together, make it nice.
filterByTerm(arrOfLinks, term);

//  NOTE: This is the syntax for if you want to console log out the result of a function
console.log(filterByTerm(arrOfLinks, term));

//  If a new type of interface is required that more or less will use a previous interface, it is possible to just 'extend' the interface with the following command. 
//  For this example the interface 'Link' will be extended to include the input 'language: string'. 
interface translatedLink extends Link{
    language: string;
}

//  Test case for the new translatedLink interface
const link1: translatedLink = {
    description: "flavour text woot",
    id: 2,
    url: "www.websiteGeneric.com/GenericLink1",
    language: "en"
}

// ***********************************************
// ***********************************************
//  This section will investigate the object value retrieval. 

//  Sample object, a person w/ some details about them 
interface person{
    name: string,
    city: string,
    age: number
};

//  Naming object objP1 to avoid naming conflict present in url example in above code
const objP1: person ={
    name: "Paolo",
    city: "Sienna",
    age: 33
};

//  Retroactively adding another person for a test
const objP3: person ={
    name: "Kyle",
    city: "Brisbane",
    age: 27
};

//  This interface extension and the const objP2 are personal additions to test if it is working or not. Seems to. Console.log prints out the information required. 
interface personMoreInfo extends person{
    height?: number,
    hairColour?: string,
    glasses: boolean;
}

const objP2: personMoreInfo={ 
    name: "David",
    city: "Sydney",
    age: 29,
    height: 198,
    glasses: true
};

//  Console printing out the city and age of objP1
console.log(objP1["city"]);
console.log(objP2.name, objP2.age, objP2.glasses, objP2.height + "cm");

//  We can decide what 'key' to use that can quickly change our search term with a variable, in this case 'key'. By changing 'const key= "?"' we can decide what to search for within the particular object
//  Modify this as we want to play around searching.
const key = "age";
console.log(objP2[key], objP1[key]);

//  More testing with new ways to adjust things. 
function filterPerson(arr, term, key){
    return arr.filter(function(person){
        return person[key].match(term);
    });
}

//  This console log will output the result of the inquiry of "for the list of people, filter to whoever matches the city term of 'Brisbane', ie. Kyle" Change the city name to search for other users
console.log(filterPerson([objP1, objP3], "Brisbane", "city"));

//  This is how you insert a function into an interface
interface Iperson {
    name: string;
    city: string;
    age: number;
    printDetails?(): void;      //  Note that the print details is an optional parameter
}

const tom: Iperson ={
    name: "Tom",
    city: "Munich",
    age: 33,    
    printDetails: function() {
        return `${this.name} - ${this.city}`;
    }
};

//  THIS will console.log print out the printDetails function, ie. the name and city. 
console.log(tom.printDetails());

// ***********************************************
// ***********************************************
// ***********************************************

//  Note on TYPE: Type is similiar to interface yet different. It can be used to selectively decide an interface's element's 'type of' in a more adjustable manner. 
//  Example: 

type Authenticated = boolean | number | string; 

interface testExample {
    authenticated: Authenticated,       //  Allows any input of the type 'Authenticated', specified above
    name: string;                       //  Allows specifically a string type. 
}

// ***********************************************
// ***********************************************
// ***********************************************

interface nameAge {
    first: string;
    second: string;
    third: number;
}

const myself: nameAge ={
    first: "Conor",
    second: "Rollinson",
    third: 26
};

console.log(myself.third);

// Test comment2
