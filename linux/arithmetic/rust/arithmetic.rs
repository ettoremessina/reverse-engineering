fn main() {
	let mut v1: u32 = 0;
	v1 = 41;
	let mut v2: u32 = 0;
	v2 = 7;
	let sum: u32 = v1 + v2;
	let sub: u32 = v1 - v2;
	let mul: u32 = v1 * v2;
	let quo: u32 = v1 / v2;
	let rem: u32 = v1 % v2;

	println!("{sum} | {sub} | {mul} | {quo} | {rem}");
}
