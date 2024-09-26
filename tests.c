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

Test(bzero, char_array_basic){
	char ft_test[] = "asd\nawkdjf";
	char test[] = "asd\nawkdjf";

	ft_bzero(ft_test, 4);
	bzero(test, 4);
	cr_assert_str_eq(ft_test, test, "returned: %s, but got %s", ft_test, test);
}

Test(memcpy, memcpy_char_array_basic){
        char ft_test_dest[] = "asdawkdjf";
        char ft_test_src[] = "bbbbbbbbbbbbf";
	
	char test_dest[] = "asdawkdjf";
        char test_src[] = "bbbbbbbbbbbbf";
        
	ft_memcpy(ft_test_dest, ft_test_src, 4);
	memcpy(test_dest, test_src, 4);
        cr_assert_str_eq(ft_test_dest, test_dest, "returned: %s, but got %s", ft_test_dest, test_dest);
}

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

Test(memcpy, memcpy_int_array_basic){
        int ft_test_dest[] = {1, 2, 3 ,4 ,5 ,6 };
        int ft_test_src[] = {10, 20, 30, 40, 50, 60};

	int test_dest[] = {1, 2, 3 ,4 ,5 ,6 };
	int test_src[] = {10, 20, 30, 40, 50, 60};

        ft_memcpy(ft_test_dest, ft_test_src, 4);
	memcpy(test_dest, test_src, 4);
	cr_assert_arr_eq_cmp(ft_test_dest, test_dest, 6, compare, "fail");
}

Test(memcpy, memcpy_test_overlay){
        char ft_test_dest[] = "ddd";
        char ft_test_src[] = "aaaaa";

        char test_dest[] = "ddd";
        char test_src[] =    "aaaaa";

        ft_memcpy(ft_test_dest, ft_test_src, 4);
        memcpy(test_dest, test_src, 4);
        cr_assert_arr_eq_cmp(ft_test_dest, test_dest, 6, compare, "fail");
}

Test(memmove, memmove_char_array_basic){
        char ft_test_dest[] = "aaaaaaa";
        char ft_test_src[] =  "bbbbbbb";

        char test_dest[] =    "aaaaaaa";
        char test_src[] =     "bbbbbbb";

        ft_memmove(ft_test_dest, ft_test_src, 4);
        memmove(test_dest, test_src, 4);
        cr_assert_str_eq(ft_test_dest, test_dest, "returned: %s, but got %s", ft_test_dest, test_dest);
}

Test(memmove, memmove_char_array_basic2){
        char ft_test_dest[] = "asdawkdjf";
        char ft_test_src[] = "bbbbbbbbbbbbf";

        char test_dest[] = "asdawkdjf";
        char test_src[] = "bbbbbbbbbbbbf";

        ft_memmove(ft_test_dest, ft_test_src + 4, 4);
        memmove(test_dest, test_src + 4, 4);
        cr_assert_str_eq(ft_test_dest, test_dest, "returned: %s, but got %s", ft_test_dest, test_dest);
}

Test(memmove, memmove_char_array_basic3){
        char ft_test_dest[] = "asdawkdjf";
        char ft_test_src[] = "bbbbbbbbbbbbf";

        char test_dest[] = "asdawkdjf";
        char test_src[] = "bbbbbbbbbbbbf";

        ft_memmove(ft_test_dest + 4, ft_test_src, 4);
        memmove(test_dest + 4, test_src, 4);
        cr_assert_str_eq(ft_test_dest, test_dest, "returned: %s, but got %s", ft_test_dest, test_dest);
}

Test(memmove, memmove_test_overlay){
        char ft_test_dest[] = "ddddddd";
        char ft_test_src[] = "sss";

        char test_dest[] =    "ddddddd";
        char test_src[] =    "sss";

        ft_memmove(ft_test_dest, ft_test_src, 4);
        memmove(test_dest, test_src, 4);
        cr_assert_str_eq(ft_test_dest, test_dest, "returned: %s, but got %s", ft_test_dest, test_dest);
}
























