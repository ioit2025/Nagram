![IMG_7209](https://github.com/user-attachments/assets/a588bef5-76c4-4536-b1b6-291f52ddce4b)

# Nagram

Nagram is a third-party Telegram client based on [NekoX](https://github.com/NekoX-Dev/NekoX) with some modifications.

## Additional feature over Nagram

- Nice icon (thanks to MaitungTM)
- Combine message
- Editable text style 
- Forced copy
- Invert reply
- Quick reply in longClick menu (thanks to @blxueya)
- Undo and Redo
- Scrollable chat preview (thanks to TeleTux)
- Noise suppress and voice enhance (thanks to )

## Build apk
We will use GitHub Actions to build the apk

1. Create your own `release.keystore` to replace `TMessagesProj/release.keystore`.

2. Open LOCAL_PROPERTIES.txt with a code editor
He should look like this
```
KEYSTORE_PASS=123456
ALIAS_NAME=key0
ALIAS_PASS=123456
TELEGRAM_APP_ID=123456
TELEGRAM_APP_HASH=abcdefg
```

3. Replace the contents with your own. Save and exit.

