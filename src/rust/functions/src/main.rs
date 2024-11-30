fn print_num(n: u32) {
    println!("n = {n}");
}
fn main() {
    print_num(3);
    let a = {
        let b = 2;
        b + 2
    };

    print_num(a);
    let c = increment(a);
    print_num(c);
}

fn increment(n: u32) -> u32 {
    n + 1
}
