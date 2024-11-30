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
    let f: u32 = 2;
    println!("f = {f}");
    let g: i32 = 2;
    println!("g = {g}");
    println!("floating\n\t- default - f64\n\t- 32bit - f32");
    let h: f32 = 2.0;
    println!("h = {h}");
    let i = 2.0;
    println!("i = {i}");
    println!("bool");
    let j = true;
    println!("j = {j}");
    println!("char");
    let k = 'k';
    println!("k = {k}");
    println!("tuple");
    let l: (i32, f64, char) = (2, 2.2, 't');
    println!("l.0 = {}", l.0);
    let (m, n, o) = l;
    println!("m = {m}");
    println!("n = {n}");
    println!("o = {o}");
    println!("array");
    let p = [1, 2, 3, 4, 5];
    println!("p[0] = {}", p[0]);
    let q: [i32; 3] = [1, 2, 3];
    println!("q[2] = {}", q[2]);
    let r = [0; 5];
    println!("r[0] = {}", r[0]);
    // println!("r[10] = {}", r[10]);
}
