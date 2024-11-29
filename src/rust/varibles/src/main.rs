fn main() {
    // declaring
    println!("declaration");
    // let a = 1;
    // a = 2;

    let mut b = 2;
    println!("b = {b}");
    b = 3;
    println!("b = {b}");

    // constants
    println!("constants");
    const C: u32 = 9;
    println!("C = {C}");

    // shadowing
    println!("shadowing");
    let d = 5;
    println!("d = {d}");
    let d = d + 1;
    println!("d = {d}");
    {
        let d = d + 2;
        println!("d = {d}");
    }
    println!("d = {d}");

    let d = "hello";
    println!("d = {d}");
    let d = d.len();
    println!("d = {d}");

    // types
    println!("types");
    let e: u32 = "2".parse().expect("Data type should be a number");
    println!("e = {e}");
    println!("scalar types\n\t- integer\n\t- float\n\t- boolean\n\t- character");
    println!("integer\n\t- signed - i32\n\t- unsigned - u32");
}
