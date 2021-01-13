//  https://www.freecodecamp.org/news/learn-typescript-in-5-minutes-13eda868daeb/
//  
//  
//  
var test = {
    prop: 42,
    func: function () {
        return this.prop;
    }
};
console.log(test.func());
//  Testing with console logs 
var a = 5;
var b = 7;
var c = a + b;
console.log(c);
//  Testing with if / else statements. 
var num = 3;
var personName = 'Alex';
var personName2 = 'Bob';
var isPresent = false; //  Doesn't seem to work with binary for if statements. Wrong syntax?
if (num === 4) {
    console.log(personName);
}
else {
    console.log(personName2);
}
//  Working with class types
var Car = /** @class */ (function () {
    //  Define how the fields are constructed for the class
    function Car(model, doors, colour, isElectric) {
        this.model = model;
        this.doors = doors;
        this.colour = colour;
        this.isElectric = isElectric;
    }
    //  This is a function that can be called to describe a car's model. 
    //  This function can be expanded upon or duplicated with adjustments to explain any of the other car properties.
    Car.prototype.displayMake = function () {
        //  console.log to display the information. Note the \n newline for added legibility
        console.log("This car is a " + this.model + ". \nThis car is " + this.colour + ", it has " + this.doors + " doors");
    };
    return Car;
}());
//  This is a Prius car for testing purposes. Inputting the values of the prius car per the 'CAR' class
var Prius = new Car('Prius', 2, 'Red', true);
//  Calling the function to console.log the information
Prius.displayMake();
//  Function is of the form of an array of links and a search term
function filterByTerm(input, searchTerm, lookupKey) {
    if (lookupKey === void 0) { lookupKey = "url"; }
    if (!searchTerm)
        throw Error("searchTerm cannot be empty"); //  If searchTerm is empty throw error
    if (!input.length)
        throw Error("input cannot be empty"); //  If there is no input at all throw an error
    var regex = new RegExp(searchTerm, "i");
    return input.filter(function (arrayElement) {
        return arrayElement[lookupKey].match(regex);
    });
}
//  Declaring three objects to be of type: Link
var obj1 = { url: "string1" };
var obj2 = { url: "string2" };
var obj3 = { url: "string3" };
//  Declaring an array of the above Link objects. Note that this an array of type: Link
var arrOfLinks = [obj1, obj2, obj3];
//  Declare the constant search term of type string to be "java"
var term = "java";
//  Put it all together, make it nice.
filterByTerm(arrOfLinks, term);
//  Test case for the new translatedLink interface
var link1 = {
    description: "flavour text woot",
    id: 2,
    url: "www.websiteGeneric.com/GenericLink1",
    language: "en"
};
;
//  Naming object objP1 to avoid naming conflict present in url example in above code
var objP1 = {
    name: "Paolo",
    city: "Sienna",
    age: 33
};
//  Retroactively adding another person for a test
var objP3 = {
    name: "Kyle",
    city: "Brisbane",
    age: 27
};
var objP2 = {
    name: "David",
    city: "Sydney",
    age: 29,
    height: 198,
    glasses: true
};
//  Console printing out the city and age of objP1
console.log(objP1["city"]);
console.log(objP2.name, objP2.age, objP2.glasses, objP2.height);
//  We can decide what 'key' to use that can quickly change our search term with a variable, in this case 'key'. By changing 'const key= "?"' we can decide what to search for within the particular object
//  Modify this as we want to play around searching.
var key = "age";
console.log(objP2[key], objP1[key]);
//  More testing with new ways to adjust things. 
function filterPerson(arr, term, key) {
    return arr.filter(function (person) {
        return person[key].match(term);
    });
}
filterPerson([objP1, objP3], "Sienna", "city");
console.log(filterPerson);
