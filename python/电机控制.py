from pydobot import Dobot

# 连接到 Dobot
dobot = Dobot('COM4')

# 启动电机，此处的参数需要根据你的步进电机进行适当调整
dobot.EMotorS(0, 1, 10000)

# 当然，你也可以通过API控制Dobot Magician的运动
# dobot.MoveWithSpeed(250, 0, 0, 30)

# 等待一段时间，让电机有时间转动
import time
time.sleep(10)

# 停止电机
dobot.EMotorS(0, 0, 10000)

# 断开与 Dobot 的连接
dobot.close()