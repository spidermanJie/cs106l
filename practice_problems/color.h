#ifdef DEFINE_COLOR
DEFINE_COLOR(Red)
DEFINE_COLOR(Green)
DEFINE_COLOR(Blue)
DEFINE_COLOR(Magenta)
DEFINE_COLOR(Yellow)
DEFINE_COLOR(NOT_A_COLOR)
#else
#error "You must first define the DEFINE_COLOR(color) macro"
#endif