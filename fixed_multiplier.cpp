#include "ap_int.h"
#include "ap_fixed.h"
typedef ap_fixed<15,0,AP_RND_ZERO> my_fixed_type;

void fixed_multiplier(my_fixed_type* in1, my_fixed_type* in2, my_fixed_type* out)
{
	(*out) = (*in1)*(*in2);
}
