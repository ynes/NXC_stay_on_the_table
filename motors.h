void stop_move() {
 Off(OUT_AC);
}

void move_forward(){
  OnFwd(OUT_AC, 75);
}

void move_backward() {
    OnRev(OUT_AC, 75);
}

void move_left() {
  OnFwd(OUT_A, 100);
  Off(OUT_C);
}
