# Smart Disinfection Cutlery Box（智能餐具消毒盒）

基于 ESP32 的智能餐具消毒盒原型：支持定时、OLED 显示、人体红外保护，以及手机端远程控制/数据交互（Blinker / 微信小程序）。

## Repository 结构

- `firmware/arduino/`：ESP32 Arduino 草图与 OLED 驱动库
- `software/wechat-miniprogram/`：微信小程序（简单的 HTTP 控制/状态上报界面）
- `hardware/`：EasyEDA 工程、原理图/PCB 导出、3D 模型
- `docs/`：想法/文档草稿
- `assets/`：示意图等资源

## 快速开始（Firmware）

1. 安装 Arduino IDE，并添加 ESP32 开发板支持（Espressif ESP32）。
2. 打开对应草图：
   - `firmware/arduino/sketches/esp32index/esp32index.ino`（Blinker BLE + OLED 倒计时）
   - `firmware/arduino/sketches/esp32indexInternet/esp32indexInternet.ino`（WiFi + HTTP 上报 + OLED 倒计时）
3. 需要 WiFi 的草图请先创建 `secrets.h`：
   - 复制 `secrets.example.h` 为同目录下的 `secrets.h`，并填入你的 WiFi/服务端地址。

## 快速开始（微信小程序）

1. 用微信开发者工具打开 `software/wechat-miniprogram/`。
2. 将 `software/wechat-miniprogram/utils/config.js` 里的 `API_ENDPOINT` 改成你的服务端地址。
3. 如需真机/发布，把 `software/wechat-miniprogram/project.config.json` 里的 `appid` 改成你自己的；本仓库默认使用 `touristappid` 便于打开工程。

## 安全提示

UVC 与臭氧具有危险性。请确保有可靠的遮光/屏蔽与人体靠近保护，避免皮肤与眼睛暴露，并在通风环境中使用。

# SmartDisinfectionCutleryBox
