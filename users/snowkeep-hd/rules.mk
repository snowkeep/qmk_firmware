# override modifier-key combinations
# https://beta.docs.qmk.fm/using-qmk/software-features/feature_key_overrides
KEY_OVERRIDE_ENABLE = yes

CONSOLE_ENABLE = no

AUDIO_ENABLE = no

NKRO_ENABLE = yes

COMBO_ENABLE = yes

SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

SRC += snowkeep-hd.c \
			 features/caps_word.c \
			 process_records.c \
			 sk-hd_overrides.c

INTROSPECTION_KEYMAP_C = sk-hd_combos.c
