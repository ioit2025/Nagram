![Nagram Logo](https://github.com/user-attachments/assets/a588bef5-76c4-4536-b1b6-291f52ddce4b)

# Nagram

Nagram 是一个基于 [NekoX](https://github.com/NekoX-Dev/NekoX) 的第三方 Telegram 客户端，经过了一些修改。

## Nagram 的额外功能

- 精美图标（感谢 MaitungTM）
- 消息合并
- 可编辑文本样式
- 强制复制
- 回复反转
- 长按菜单中的快速回复（感谢 @blxueya）
- 撤销和重做
- 可滚动的聊天预览（感谢 TeleTux）
- 噪音抑制和语音增强（感谢提供者）

## 构建 APK

我们将使用 GitHub Actions 来构建 APK。

1. 创建自己的 `release.keystore` 文件，并替换 `TMessagesProj/release.keystore`。
   
2. 使用代码编辑器打开 `LOCAL_PROPERTIES.txt` 文件。文件内容应如下所示：
```
KEYSTORE_PASS=123456
ALIAS_NAME=key0
ALIAS_PASS=123456
TELEGRAM_APP_ID=123456
TELEGRAM_APP_HASH=abcdefg
```
将文件里面的内容替换为你自己的

3. 将文件编码为base64输出
```
base64 LOCAL_PROPERTIES.txt
```

4. 将编码并输出后的字符复制下来

5. 添加 Actions secrets and variables [？](https://docs.github.com/zh/actions/security-for-github-actions/security-guides/using-secrets-in-github-actions)

变量
- LOCAL_PROPERTIES
- HELPER_BOT_TOKEN
- HELPER_BOT_TARGET