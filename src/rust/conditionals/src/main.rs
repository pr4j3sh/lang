fn main() {
    let a = 19;
    if a < 18 {
        println!("you are a kid");
    } else if a == 18 {
        println!("you are 18");
    } else {
        println!("you are an adult");
    }

    let b = if false { 4 } else { 5 };
    println!("b = {b}");

    let mut c = 0;
    loop {
        println!("{c}");
        c += 1;
        if c > 10 {
            break;
        }
    }

    let d = [1, 2, 3, 4, 5];
    let mut e = 0;
    while e < 5 {
        println!("{}", d[e]);
        e += 1;
    }
    for f in d {
        println!("{f}");
    }

    for g in 1..6 {
        println!("{g}");
    }
}
