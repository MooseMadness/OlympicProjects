using UnityEngine;
using System.Collections.Generic;

public class PuzzleRenderOrderScript : MonoBehaviour
{
    private List<PuzzlePieceScript> pieces = new List<PuzzlePieceScript>();

    public static PuzzleRenderOrderScript instance;

    private void Awake()
    {
        instance = this;
    }

    public void AddPiece(PuzzlePieceScript piece)
    {
        piece.SetPuzzlesRenderOrder(pieces.Count);
        pieces.Add(piece);
    }

    public void RemovePiece(PuzzlePieceScript piece)
    {
        pieces.Remove(piece);
        foreach(PuzzlePieceScript p in pieces)
        {
            if (p.renderOrder > piece.renderOrder)
                p.SetPuzzlesRenderOrder(p.renderOrder - 1);
        }
    }

    public void StartDrag(PuzzlePieceScript piece)
    {
        foreach(PuzzlePieceScript p in pieces)
        {
            if (p.renderOrder > piece.renderOrder)
                p.SetPuzzlesRenderOrder(p.renderOrder - 1);
        }
        piece.SetPuzzlesRenderOrder(pieces.Count);
    }

    public void StopDrag(PuzzlePieceScript piece)
    {
        piece.SetPuzzlesRenderOrder(pieces.Count - 1);
    }
}