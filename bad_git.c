
struct {
    int my_age;
    int your_age;
    int gap_of_between_us;
} _attribute_(_packed_) bad_git_t;


void show_is_good_or_notgood(void)
{
     if  (calc_gap()  <  10)  {
      puts("not bad");
     }
     else  {
       puts("so what?");
     }
}


int calc_gap(void)
{
  bad_git_t gap;
    
  return ((uint8_t  *)&gap.your_age - (uint8_t  *)&gap.my_age);
}
