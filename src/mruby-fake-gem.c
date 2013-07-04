	
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/string.h"
#include "mruby/data.h"

mrb_value fake_c_method1(mrb_state *mrb, mrb_value self){
  return mrb_fixnum_value(999);
}

mrb_value fake_c_method2(mrb_state *mrb, mrb_value self){
  return mrb_fixnum_value(777);
}


void
mrb_mruby_fake_gem_gem_init(mrb_state* mrb) {

  struct RClass *fakeClass = mrb_define_class(mrb, "Fake", mrb->object_class);
  mrb_define_method(mrb, fakeClass, "c_method1", fake_c_method1, ARGS_NONE());
  mrb_define_method(mrb, fakeClass, "c_method2", fake_c_method2, ARGS_NONE());
}
void
mrb_mruby_fake_gem_gem_final(mrb_state* mrb) {

}