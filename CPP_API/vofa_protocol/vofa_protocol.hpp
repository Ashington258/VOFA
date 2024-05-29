#ifndef VOFA_PROTOCOL_H
#define VOFA_PROTOCOL_H

#include <vector>

// 将浮点数组转化为协议格式并打印
void sendFrame(const std::vector<float> &ch_data);

#endif // VOFA_PROTOCOL_H
