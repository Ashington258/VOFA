#include "vofa_protocol.hpp"
#include <iostream>
#include <vector>
// #include <thread> // for std::this_thread::sleep_for
#include <chrono> // for std::chrono::milliseconds
#include <cmath>  // for std::sin, std::cos

int main()
{
    float t = 0;

    while (true)
    {
        t += 0.1f;

        // 假设从陀螺仪获取的欧拉角信息
        float roll = 0.5f * std::sin(t);
        float pitch = 0.5f * std::cos(t);
        float yaw = 0.5f * std::sin(2 * t);

        // 生成通道数据
        std::vector<float> ch_data = {roll, pitch, yaw};

        // 发送数据帧
        sendFrame(ch_data);

        // 模拟Arduino中的delay
    }

    return 0;
}
