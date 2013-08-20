/**
 * Main file 
 */
#include <assert.h>
#include <mylib.h>

int main()
{
  const char str[] = "Test String\n";
  int ret=-1; 
  ret = my_print((char *)str, sizeof(str));
  assert(!ret);
  return 0;
}
