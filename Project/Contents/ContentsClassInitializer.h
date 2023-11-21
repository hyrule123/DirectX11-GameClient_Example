
namespace ehw
{
	class ContentsClassInitializer
	{
	public:
		static void Init();

	private:
		//이 2개는 Code Generator에 의해 자동 생성됨.
		static void InitScript();
		static void InitScene();

		//이 함수에서 처음에 시작할때 어떻게 해줄것인지를 지정해주면됨
		static void InitContents();
	};
}

