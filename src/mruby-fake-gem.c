	
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/string.h"
#include "mruby/data.h"

void
mrb_mruby_fake_gem_gem_init(mrb_state* mrb) {

  RClass *fakeClass = mrb_define_class(mrb, "Fake", mrb->object_class);

}
void
mrb_mruby_fake_gem_gem_final(mrb_state* mrb) {

}