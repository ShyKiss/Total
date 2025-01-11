#include "../PCH/PCH.h"

namespace Style {
	void Apply() {
		//ImGuiStyle style = ImGui::GetStyle();
		ImVec4* colors = ImGui::GetStyle().Colors;
		ImGui::GetStyle().WindowRounding = 8;
		ImGui::GetStyle().ChildRounding = 8;
		ImGui::GetStyle().FrameRounding = 4;
		ImGui::GetStyle().GrabRounding = 4;
		ImGui::GetStyle().PopupRounding = 8;
		ImGui::GetStyle().GrabMinSize = 0.1;
		ImGui::GetStyle().WindowTitleAlign = ImVec2(0.5, 0.84);

		colors[ImGuiCol_WindowBg]			= ImColor(10, 10, 15, 255);
		colors[ImGuiCol_ChildBg]			= ImColor(15, 15, 20, 255);
		colors[ImGuiCol_FrameBg]			= ImColor(45, 45, 55, 255);
		colors[ImGuiCol_FrameBgHovered]		= ImColor(50, 50, 60, 255);
		colors[ImGuiCol_FrameBgActive]		= ImColor(75, 75, 85, 255);
		colors[ImGuiCol_PopupBg]			= ImColor(45, 45, 55, 255);
		colors[ImGuiCol_TitleBg]			= ImColor(10, 10, 15, 255);
		colors[ImGuiCol_TitleBgActive]		= ImColor(10, 10, 15, 255);
		colors[ImGuiCol_Border]				= ImColor(0, 0, 0, 0);
		colors[ImGuiCol_CheckMark]			= ImColor(127, 255, 212, 255);
		colors[ImGuiCol_Button]				= ImColor(127, 255, 212, 102);
		colors[ImGuiCol_ButtonHovered]		= ImColor(127, 255, 212, 130);
		colors[ImGuiCol_ButtonActive]		= ImColor(127, 255, 212, 255);
		colors[ImGuiCol_SliderGrab]			= ImColor(127, 255, 212, 102);
		colors[ImGuiCol_SliderGrabActive]	= ImColor(127, 255, 212, 255);
		colors[ImGuiCol_Header]				= ImColor(127, 255, 212, 102);
		colors[ImGuiCol_HeaderHovered]		= ImColor(127, 255, 212, 140);
		colors[ImGuiCol_HeaderActive]		= ImColor(127, 255, 212, 255);
		colors[ImGuiCol_Tab]				= ImColor(127, 255, 212, 102);
		colors[ImGuiCol_TabSelected]		= ImColor(127, 255, 212, 140);
		colors[ImGuiCol_ScrollbarBg]		= ImColor(15, 15, 20, 255);

	}
} // namespace Style