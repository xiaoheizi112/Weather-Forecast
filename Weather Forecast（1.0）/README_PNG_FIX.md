# 解决 libpng warning: iCCP: known incorrect sRGB profile 问题

这个警告是由于PNG图片文件中包含了不正确的sRGB颜色配置文件导致的。虽然这个警告不会影响程序的正常运行，但可能会在控制台输出中显示警告信息。

## 解决方案

### 方案1：忽略警告（推荐）
这个警告不会影响程序功能，可以安全忽略。如果想要在代码中抑制这个警告，可以在main.cpp中添加：

```cpp
#include <QLoggingCategory>

// 在main函数开始处添加
QLoggingCategory::setFilterRules("qt.gui.imageio.png.warning=false");
```

### 方案2：使用在线工具修复PNG文件
1. 访问 https://www.remove-image-background.com/zh/png-optimizer
2. 上传PNG文件
3. 下载优化后的文件
4. 替换原文件

### 方案3：使用ImageMagick（需要安装）
如果系统安装了ImageMagick，可以使用以下命令批量处理：

```bash
# 安装ImageMagick后运行
for /r weather %i in (*.png) do magick "%i" -strip "%i"
```

### 方案4：重新保存PNG文件
使用图像编辑软件（如GIMP、Photoshop等）重新保存PNG文件，不包含颜色配置文件。

## 当前状态
项目中的PNG文件位于以下目录：
- weather/weather_1/ (7个文件)
- weather/weather_2/ (10个文件) 
- weather/weather_3/ (26个文件)

总共43个PNG文件可能包含有问题的颜色配置文件。

## 注意事项
- 这个警告不会影响程序的正常运行
- 修复后需要重新编译项目
- 建议先备份原始PNG文件