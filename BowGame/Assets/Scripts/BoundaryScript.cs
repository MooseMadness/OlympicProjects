public class BoundaryScript : ArrowTargetScript
{
    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        arrow.DestroyArrow();
        GameMangerScript.instance.OnLoseArrow();
    }
}