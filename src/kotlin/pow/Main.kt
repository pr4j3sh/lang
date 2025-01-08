import kotlin.math.abs

fun pow(
    x: Double,
    n: Int,
): Double {
    var num: Long = n.toLong()
    var base: Double = x

    if (num < 0) {
        num = abs(num)
        base = 1 / x
    }

    var ans: Double = 1.0

    for (i in 1..num) {
        ans *= base
    }
    return ans
}

fun opPow(
    x: Double,
    n: Int,
): Double {
    if (n == 0) {
        return 1.0
    }

    var h = opPow(x, n / 2)
    if (n % 2 == 0) {
        return h * h
    } else {
        return if (n > 0) (h * h) * x else (h * h) / x
    }
}

fun main(args: Array<String>) {
    println(pow(2.0, -4))
    println(opPow(2.0, -4))
}
