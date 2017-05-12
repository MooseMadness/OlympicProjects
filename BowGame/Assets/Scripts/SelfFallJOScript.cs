public class SelfFallJOScript : JoinedObjectScript
{
    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        if(arrow.isShooting)
        {
            AttachArrow(arrow);
            Fall();
        }
    }
}