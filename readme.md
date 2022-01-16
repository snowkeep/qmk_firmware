# Snowkeep's Implementation of Hands Down Gold and Hands Down Titanium

* slightly modified Hands Down Gold and Titanium, by [Alan Reiser](https://sites.google.com/alanreiser.com/handsdown)
  * space is on left thumb, R/T is on right; colon and semi-colon swapped
* mostly a clean-room implementation.  I have looked at [Moutis's](https://github.com/moutis/HandsDown) code but used little of it.
* I have most of Moutis's combos, but not the adaptive or linger keys 
* The layers started off based on [Miryoku](https://github.com/manna-harbour/miryoku) but symbols are now
  much closer to [Pascal Getreuer's](https://getreuer.info/posts/keyboards/symbol-layer/index.html)
* CapsWord and some combo ideas also came from Pascal Getreuer's Keyboard Builder's Digest
  [article](https://kbd.news/Caps-Word-and-other-QMK-tips-1073.html).
* code organization is based off of [replicaJunction's](/users/replicaJunction) QMK user area.

## Supported Keyboards

* [Keebio Iris](/keyboards/keebio/iris/keymaps/snowkeep-hd_gold/)
* [Keyboardio Atreus](/keyboards/keyboardio/atreus/keymaps/snowkeep-hd_gold/)

## Notes and Caveats

* [common code](/users/snowkeep-hd/)
* combos added to replicate the Iris outer columns on the Atreus - usually ring/pinky.
* CapsWord does not work on Windows if you have the CapsLock key overridden to something useful -
  implementations using shift would be more robust.
* the CTRL-BRACES combo ('(', ')', back-arrow) does something odd in most windows in Windows.  The other 3 BRACES
  variants work as expected.
* Titanium is not working.  It compiles, but flashes to a paperweight.  I'm not sure why.  The
  more I looked at the layout, the less I think it's a good fit for me, so it's on hold.  I'll probably revisit it
  when Alan releases and documents it on his website.

# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/Uq7gcHh)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the [Clueboard product line](https://clueboard.co).

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [Docsify](https://docsify.js.org/) and hosted on [GitHub](/docs/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "Edit this page" link at the bottom of any page.

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.
