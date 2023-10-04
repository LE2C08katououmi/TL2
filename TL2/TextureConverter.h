#pragma once
#include <string>
#include <DirectXTex.h>
class TextureConverter
{
public:
	/// <summary>
	/// テクスチャをWICからDDSに変換する
	/// </summary>
	/// <param name="filePath"></param>
	void ConvertTextureWICToDDS(const std::string& filePath);

private:

	/// <summary>
	/// テクスチャファイル読み込み
	/// </summary>
	/// <param name="filePath"></param>
	void LoadWICTextureFromFile(const std::string& filePath);

	/// <summary>
	/// マルチバイト文字列をワイド文字列に変換
	/// </summary>
	/// <param name="mstring"></param>
	/// <returns></returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
};

