class Book {
  constructor(title, author, isbn) {
    this.title = title;
    this.author = author;
    this.isbn = isbn;
  }

  display() {
    console.log({ title: this.title, author: this.author, isbn: this.isbn });
  }
}

class Library {
  constructor() {
    this.books = [];
  }
  addBook(title, author, isbn) {
    let book = new Book(title, author, isbn);
    this.books.push(book);
  }

  removeBook(isbn) {
    this.books = this.books.filter((book) => book.isbn !== isbn);
  }

  listBooks() {
    for (let book of this.books) {
      book.display();
    }
  }
}

const lib = new Library();
lib.listBooks();
lib.addBook("Druig' Adventure", "Druig", "1");
lib.addBook("Jane' Adventure", "Jane", "2");
lib.listBooks();
lib.removeBook("2");
lib.listBooks();
