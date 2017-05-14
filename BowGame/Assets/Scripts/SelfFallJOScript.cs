public class SelfFallJOScript : JoinedObjectScript
{
    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        if(arrow.isShooting)
        {
            AttachArrow(arrow);
            if (isFalled)
            {
                GameMangerScript.instance.OnLoseArrow();
            }
            else
            {
                Fall();
            }
        }
    }
}