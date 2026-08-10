# vial-qmk-keyball39

Keyball39 (BLE Micro Pro) keymap and Auto Mouse Layer tweaks.

Forked from `ukoasis/vial-qmk` @ `ukoasis/keyball39-bmp` (71adeee5).
GitHub reports the parent as `vial-kb/vial-qmk` — don't use Sync fork.

## Changes

- AML no longer fires on incidental motion: movement is accumulated and has to
  exceed `AML_ACTIVATE_THRESHOLD` (50)
- AML hold time is configurable at runtime via `keyball_get/set_auto_mouse_timeout()`
- Fixed scroll axis signs (`h = -y, v = x` → `h = y, v = -x`)

`keyboards/keyball/keyball39/keymaps/bmp/{left,right}.config.json` are the BMP split
configs (left = SPLIT_SLAVE, right = SPLIT_MASTER).

Dongle side: [qmk_firmware-bmp-dongle](https://github.com/tennis-n1010/qmk_firmware-bmp-dongle)
— consumer and system keys are disabled there.
