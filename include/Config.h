#pragma once


class Config {
    public:
    static constexpr float MinFontSize = 12.0f;
    static constexpr float MaxFontSize = 64.0f;

    static void Init();
    static void Save();
    static unsigned int ToggleKey;
    static uint8_t ToggleMode;
    static unsigned int ToggleKeyGamePad;
    static uint8_t ToggleModeGamePad;
    static bool FreezeTimeOnMenu;
    static bool BlurBackgroundOnMenu;
    static int MenuStyle;
    static std::vector<std::string> MenuStyles;
    static std::string PrimaryFont;
    static bool EnableChinese;
    static bool EnableJapanese;
    static bool EnableKorean;
    static bool EnableCyrillic;
    static bool EnableThai;
    static bool EnableTurkish;
    static float FontSizeMedium;
    static float NormalizeFontSize(float size);
    static void LoadStyle();
};
