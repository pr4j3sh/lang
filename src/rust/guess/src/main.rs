use rand::Rng;
use std::cmp::Ordering;
use std::io;

fn main() {
    println!("Guess the number!");

    // declaring a variable
    let secret = rand::thread_rng().gen_range(1..=100);
    // let apples = 5; // immutable
    // let mut bananas = 6; // mutable

    // println!("[debug] secret -> {secret}");

    loop {
        println!("num (1 - 100) > ");
        let mut n = String::new();
        io::stdin().read_line(&mut n).expect("failed to read line");
        let n: u32 = match n.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        match n.cmp(&secret) {
            Ordering::Less => println!("too small"),
            Ordering::Greater => println!("too big"),
            Ordering::Equal => {
                println!("you guessed correctly");
                break;
            }
        }
    }
}
