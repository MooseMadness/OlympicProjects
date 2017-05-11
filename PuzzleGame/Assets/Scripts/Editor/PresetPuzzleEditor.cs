using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(PresetPuzzleScript))]
public class PresetPuzzleEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();
        PresetPuzzleScript script = (PresetPuzzleScript)target;
        if (GUILayout.Button("Настроить пазл"))
        {
            script.PresetPuzzle();
        }
    }
}
