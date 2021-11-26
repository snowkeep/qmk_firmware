# override modifier-key combinations
# https://beta.docs.qmk.fm/using-qmk/software-features/feature_key_overrides
KEY_OVERRIDE_ENABLE = yes

CONSOLE_ENABLE = no

AUDIO_ENABLE = no

NKRO_ENABLE = yes

COMBO_ENABLE = yes

SRC += snowkeep-hd_gold.c \
			 features/caps_word.c \
			 process_records.c \
			 sk-hdg_combos.c \
			 sk-hdg_overrides.c

