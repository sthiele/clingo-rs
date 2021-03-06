use clingo::*;

fn main() {
    let sym = Symbol::create_id("test", true).unwrap();
    let term1 = ast::Term::from(sym);
    let term2 = ast::Term::from(sym);
    let op = ast::BinaryOperation::xor(term1, term2);
    drop(term1);
    drop(term2);
    let _end = op;
}