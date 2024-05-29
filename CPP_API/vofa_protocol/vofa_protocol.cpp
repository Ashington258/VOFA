#include "vofa_protocol.hpp"
#include <cstdio>  // for printf
#include <cstring> // for memcpy

// 定义帧尾
const unsigned char tail[4] = {0x00, 0x00, 0x80, 0x7f};

/**
 * Sends a frame containing the given channel data.
 *
 * @param ch_data The vector of float values representing the channel data.
 *
 * @return void
 *
 * @throws None
 */
void sendFrame(const std::vector<float> &ch_data)
{
    // 获取通道数据的大小（即浮点数的数量）
    size_t ch_count = ch_data.size();

    // 创建一个缓冲区来存储所有数据，包括通道数据和尾部数据
    // 缓冲区的大小等于通道数据大小加上尾部数据大小
    std::vector<unsigned char> buffer(ch_count * sizeof(float) + sizeof(tail));

    // 将通道数据（浮点数数组）复制到缓冲区的起始位置
    // buffer.data() 返回缓冲区的指针，ch_data.data() 返回通道数据的指针
    // ch_count * sizeof(float) 是要复制的数据的字节大小
    std::memcpy(buffer.data(), ch_data.data(), ch_count * sizeof(float));

    // 将帧尾部的数据复制到缓冲区的相应位置
    // buffer.data() + ch_count * sizeof(float) 表示缓冲区中通道数据之后的位置
    // tail 是帧尾部数据的指针，sizeof(tail) 是帧尾部数据的字节大小
    std::memcpy(buffer.data() + ch_count * sizeof(float), tail, sizeof(tail));

    // 以十六进制格式打印出缓冲区的内容
    // buffer 是一个 unsigned char 的数组，其中每个元素是一个字节
    // for 循环遍历缓冲区中的每个字节，并以十六进制形式打印出来

    for (unsigned char byte : buffer)
    {
        printf("%02x ", byte);
    }
    printf("\n");
}
