#include <stdio.h>
#include <stdlib.h>
#include "vofa_protocol.h"

int main()
{
    // 测试单个浮点数
    vofa_one(1.23f);
    // 测试两个浮点数
    vofa_two(1.23f, 4.56f);
    // 测试三个浮点数
    vofa_three(1.23f, 4.56f, 7.89f);
    // 测试四个浮点数
    vofa_four(1.23f, 4.56f, 7.89f, 10.12f);
    // 测试五个浮点数
    vofa_five(1.23f, 4.56f, 7.89f, 10.12f, 13.14f);

    return 0;
}

// int main()
// {
//     // 示例浮点数数组
//     float float_array[1] = {1.345};

//     // 创建字节流
//     unsigned char *byte_stream = createFloatByteStream(1, float_array);

//     // 输出结果
//     if (byte_stream)
//     {
//         for (int i = 0; i < 4 * 4 + 4; i++)
//         {
//             printf("%02x ", byte_stream[i]);
//         }
//         printf("\n");

//         // 释放内存
//         free(byte_stream);
//     }

//     return 0;
// }
