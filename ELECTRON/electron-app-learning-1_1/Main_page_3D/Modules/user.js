//  *********
//  Method 1
/*
const getName = () => {
    return "Jim"
};

const getLocation = () => {
    return "Munich";
}
const dateOfBirth = "1.11.1994";

exports.getName = getName;
exports.getLocation = getLocation;
exports.dob = dateOfBirth;
//  **********
//  Method 2

exports.getName = () => {
    return "Jim";
};

exports.getLocation = () => {
    return "Munich";
};

exports.dob = "1.11.1994";
*/
//  **********
//  Method 3
//  module.exports
class User {
    constructor (name, age, email) {
        this.name = name;
        this.age = age;
        this.email = email;
    }
    getUserStates() {
        return `
            Name: ${this.name}
            Age: ${this.age}
            Email: ${this.email}
        `;
    }
}
module.exports = User;