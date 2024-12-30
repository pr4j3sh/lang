console.log(this);

// usage in object
let userName = {
  firstName: "Jane",
  lastName: "Doe",
  fullName: function () {
    console.log(`${this.firstName} ${this.lastName}`);
  },
};

userName.fullName();

// call() - used to call an object method with another object as argument

const person = {
  firstName: "John",
  lastName: "Doe",
};

userName.fullName.call(person);

// bind() - borror method from another object
let n = userName.fullName.bind(person);
n();
