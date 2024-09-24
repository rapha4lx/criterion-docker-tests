#include <criterion/criterion.h>

#include "./lib/libft.h"


bool array_are_equal(int *arr1, int* arr2, size_t size)
{
	for (size_t i = 0; i < size; i++)
		if (arr1[i] != arr2[i])
			return (0);
	return (1);
}

Test(memset, string_basic){
        char ft_test[] = "dddd";
	char mem_test[] = "dddd";

        ft_memset(ft_test, 'a', 2);
	memset(mem_test, 'a', 2);
	cr_assert_str_eq(ft_test, mem_test, "returned: %s, but got %s", mem_test, ft_test);
}

Test(memset, int_array_basic){
        int ft_test[] = {0,1,2,3,4,5,6};
        int origin[] = {0,1,2,3,4,5,6};

        ft_memset(ft_test, 1802, 2);
        memset(origin, 1802, 2);

	cr_assert(array_are_equal(ft_test, origin, 7));
}






